/* { dg-do compile } */
/* { dg-options "-O2 -misa=sm_53" } */

_Float16 var;

void neg()
{
  var = -var;
}

/* { dg-final { scan-assembler "xor.b16" } } */
