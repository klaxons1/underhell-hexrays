unsigned int __thiscall sub_102386F0(int this, int a2)
{
  char *v3; // ebx
  unsigned int result; // eax
  int *v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // [esp-8h] [ebp-30h]
  float v9; // [esp+4h] [ebp-24h]

  v3 = *(char **)(this + 920);
  if ( !v3 )
    v3 = (char *)String;
  result = *(_DWORD *)(this + 928);
  if ( result != -1
    && (v5 = &off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 1],
        result >>= 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 928) & 0xFFF) + 2] == result)
    && (v6 = *v5) != 0 )
  {
    if ( a2 == 4 )
    {
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(*v5);
      v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24));
      result = sub_1023C2A0(v8, v6 + 580, v3, 0.0, 0, 4, 0, 0.0, 0);
LABEL_19:
      *(_BYTE *)(this + 912) = 0;
      return result;
    }
    if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      sub_100DAE60(v6);
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24));
    v9 = (double)*(int *)(this + 888) * 0.01;
    result = sub_1023C2A0(v7, v6 + 580, v3, v9, *(_DWORD *)(this + 808), a2, *(_DWORD *)(this + 872), 0.0, 0);
    if ( *(_BYTE *)(this + 913) )
      *(_BYTE *)(this + 912) = 1;
  }
  else if ( a2 == 4 && *(_DWORD *)(this + 932) != -1 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    result = sub_1023C2A0(*(_DWORD *)(this + 932), this + 580, v3, 0.0, 0, 4, 0, 0.0, 0);
    goto LABEL_19;
  }
  return result;
}
