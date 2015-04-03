#lang racket
(define add-two-nums
  (lambda (x y)
    (+ x y)))

(add-two-nums 3 5)

(define list-length
  (lambda (lst)
    (if (null? lst)
        0
        (+ 1 (list-length (cdr lst))))))

(list-length '(a b c d e))


(define list-of-numbers?
  (lambda (lst)
    (if (null? lst)
        #t  ; is this right?
        (and (number? (car lst))
             (list-of-numbers? (cdr lst))))))

(list-of-numbers? '(1 2 3 4))
(list-of-numbers? '(1 a b 3))