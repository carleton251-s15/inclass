#lang racket
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(1 8 3 5))

(foldl cons '() '(1 2 3))
(foldr cons '() '(1 2 3))
(foldl + 5 '(1 2 3))

(define my-map
  (lambda (f lst)
    (if (null? lst) '()
        (cons (f (car lst)) (my-map f (cdr lst))))))

(define my-foldl
  (lambda (f init lst)
    (if (null? lst) init
        (my-foldl f (f (car lst) init) (cdr lst)))))

(define my-foldr
  (lambda (f init lst)
    (if (null? lst) init
        (f (car lst) (my-foldr f init (cdr lst))))))

(my-map addOne '(1 8 3 5))

(my-foldl cons '(4 5 6) '(1 2 3))
(my-foldr cons '(4 5 6) '(1 2 3))