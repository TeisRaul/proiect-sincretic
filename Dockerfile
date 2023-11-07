FROM gcc:latest
WORKDIR /app
COPY hanoi.c .
RUN gcc -o hanoi hanoi.c
CMD ["./hanoi"]