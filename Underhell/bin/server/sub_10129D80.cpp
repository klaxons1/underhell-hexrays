int __thiscall sub_10129D80(int this, int *a2)
{
  char **p_String2; // eax
  int v4; // edi
  char *v5; // eax
  int result; // eax
  float *v7; // ebx
  char *String2; // [esp+28h] [ebp-4h] BYREF

  p_String2 = (char **)(a2 + 2);
  if ( a2[6] != 2 )
  {
    String2 = 0;
    p_String2 = &String2;
  }
  String2 = *p_String2;
  if ( !String2 )
    String2 = *(char **)(this + 212);
  v4 = 0;
  while ( 1 )
  {
    v5 = String2;
    if ( !String2 )
      v5 = (char *)String;
    result = sub_1012C5B0(v4, v5, this, *a2, 0);
    v4 = result;
    if ( !result )
      break;
    v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 208))(result);
    if ( v7 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_100C3210(
        v7,
        0,
        *(float *)(dword_106B31C8 + 12),
        0,
        *(_DWORD *)(this + 828),
        *(_DWORD *)(this + 580),
        *(_DWORD *)(this + 584),
        *(_DWORD *)(this + 588),
        *(_DWORD *)(this + 844));
    }
  }
  return result;
}
