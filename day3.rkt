#lang racket
(define remove-first
  (lambda (s lst)
    (cond ([null? lst] '())
          ([equal? s (car lst)] (cdr lst))
          (else (cons (car lst)
                      (remove-first s (cdr lst)))))))

(define remove-all
  (lambda (s lst)
    (cond ([null? lst] '())
          ([equal? s (car lst)] (remove-all s (cdr lst)))
          (else (cons (car lst)
                      (remove-all s (cdr lst)))))))

(define subst
  (lambda (old new lst)
    .....?