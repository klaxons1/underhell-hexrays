int __thiscall sub_1017AF30(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebx
  _DWORD *v6; // [esp+14h] [ebp+8h]

  *a2 = 0;
  a2[1] = 0;
  v3 = 0;
  v4 = 0;
  a2[2] = 0;
  a2[3] = 0;
  v6 = this + 222;
  do
  {
    if ( sub_1010BBC0(v6) > 0 )
      *((_BYTE *)a2 + v3++) = v4;
    v6 += 6;
    ++v4;
  }
  while ( v4 < 16 );
  return v3;
}
