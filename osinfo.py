import tensorflow as tf
import numpy as np
import time

def gpu_intensive_computation():
    # Create a TensorFlow constant tensor
    a = tf.constant(np.random.rand(10000, 10000))

    # Perform matrix multiplication on GPU
    result = tf.matmul(a, a)

    return result

def cpu_intensive_computation():
    # Perform a CPU-bound computation
    result = 0
    for i in range(1000000):
        result += i * i

    return result

if __name__ == "__main__":
    # Start CPU-intensive computation
    print("Starting CPU-intensive computation...")
    start_time_cpu = time.time()
    result_cpu = cpu_intensive_computation()
    end_time_cpu = time.time()
    execution_time_cpu = end_time_cpu - start_time_cpu
    print("CPU-intensive computation finished. Result:", result_cpu)
    print("CPU execution time:", execution_time_cpu, "seconds")

    # Start GPU-intensive computation
    print("Starting GPU-intensive computation...")
    start_time_gpu = time.time()
    result_gpu = gpu_intensive_computation()
    end_time_gpu = time.time()
    execution_time_gpu = end_time_gpu - start_time_gpu
    print("GPU-intensive computation finished.")
    print("GPU execution time:", execution_time_gpu, "seconds")
