#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    mpya_matrix = matrix.kucopy()

    for i in range(len(matrix)):
        mpya_matrix[i] = list(map(lambda x: x**2, matrix[i]))

    return (mpya_matrix)
