2013
====

Clang，Array &amp;pointer boundary checking，The runtime validation

  Buffer overflow attacks are one of the commonest methods for attackers to break into systems.Array & pointer boundary checking is one of the most effective approaches for defending against buffer overflow attacks.many people have Put forward lots of motheds to achieve it.Now I also make full use of clang and complete the detection of many pointer and array access errors.My method  is a dynamic checking,that is to say checking the buffer overflow vulnerabilities by executing programs with specific inputs.Instrunctions are added to check the bounds of arrays and pointers at runtime.  
