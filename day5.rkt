#lang racket
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(1 8 3 5))

(foldl cons '() '(1 2 3))
(foldr cons '() '(1 2 3))
(foldl + 5 '(1 2 3))
