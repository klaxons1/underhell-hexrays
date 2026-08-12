int __thiscall sub_100366D0(int this, char a2)
{
  int v2; // edx
  int v4; // [esp-4h] [ebp-4h]

  *(_BYTE *)(this + 169) = a2;
  v4 = *(_DWORD *)(this + 164);
  v2 = (int)*off_103D89D0;
  if ( a2 )
    return (*(int (__stdcall **)(int))(v2 + 4))(v4);
  else
    return (*(int (__stdcall **)(int))(v2 + 8))(v4);
}
