#lang racket
(define subsets
  (lambda (lst)
    (if (null? lst) '(())
        (append
         (subsets (cdr lst))
         (cons-each (car lst)  (subsets (cdr lst)))))))

(define cons-each
  (lambda (s lst)
    (if (null? lst) '()
        (cons (cons s (car lst)) (cons-each s (cdr lst))))))
        





(define gen-lazy-list
  (lambda (start stop)
    (if (> start stop)
        #f
        (cons start
            (lambda () (gen-lazy-list (+ start 1) stop))))))

(define circlearea
  (lambda (r)
    (let ((davepi 3.14))
      (* davepi r r))))

;; silly example with an internal function
(define circleagain
  (lambda (r)
    (let [(pi 3.14) (sqr (* r r))]
      (let ((area (lambda () (* pi sqr))))
        (area)))))

                    
;; Non-curried multiplication
(define mult
  (lambda (a b)
    (* a b)))

;; Curried version
(define cmult
  (lambda (a)   
    (lambda (b)
      (* a b))))

;; Make a function (curry3) that takes a regular 3-argument function
;; and converts to a curried function.

(define curry3
  (lambda (f)
    (lambda (a)
      (lambda (b)
        (lambda (c)
          (f a b c))))))

  
(define curmult (curry3 *))
(((curmult 3) 12) 2)









