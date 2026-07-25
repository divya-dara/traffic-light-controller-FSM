# Traffic Light Finite State Machine

```
        +-------------+
        |     RED     |
        +-------------+
               |
               v
     +------------------+
     |   RED + YELLOW   |
     +------------------+
               |
               v
        +-------------+
        |    GREEN    |
        +-------------+
               |
               v
        +-------------+
        |   YELLOW    |
        +-------------+
               |
               +-------------------+
                                   |
                                   v
                             Back to RED
```

## States

1. RED
2. RED + YELLOW
3. GREEN
4. YELLOW

The controller continuously repeats this sequence.