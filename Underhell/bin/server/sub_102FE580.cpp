char __userpurge sub_102FE580@<al>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  char result; // al
  float v5[3]; // [esp+4h] [ebp-Ch] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( a1[921] != 1 )
    return 1;
  sub_10070340(a3, (int)a1, v5);
  result = sub_102FBCF0(a1, (int)&savedregs, a2, (int)a1, v5);
  if ( result )
    return 1;
  return result;
}
