int __thiscall sub_10075CC0(int this, unsigned __int8 a2)
{
  int v2; // edx
  int *v5; // eax
  unsigned __int8 v6; // cl
  int *v7; // edi
  int *v8; // eax
  int result; // eax
  unsigned __int8 v10; // [esp+14h] [ebp+8h]

  v2 = dword_106931E0;
  if ( (dword_106931E0 & 1) == 0 )
  {
    v2 = dword_106931E0 | 1;
    dword_106931E0 |= 1u;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( a2 == 0xFF )
    v5 = &dword_106931DC;
  else
    v5 = (int *)(*(_DWORD *)(this + 4) + 12 * a2);
  v6 = *((_BYTE *)v5 + 1);
  v10 = v6;
  if ( (v2 & 1) == 0 )
  {
    dword_106931E0 = v2 | 1;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( v6 == 0xFF )
    v7 = &dword_106931DC;
  else
    v7 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
  *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * a2 + 1) = *(_BYTE *)v7;
  if ( (dword_106931E0 & 1) == 0 )
  {
    dword_106931E0 |= 1u;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( v6 == 0xFF )
    v8 = &dword_106931DC;
  else
    v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
  if ( *(_BYTE *)v8 != 0xFF )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_100758F0((_DWORD *)this, v6) + 2) = a2;
    v6 = v10;
  }
  if ( v6 != 0xFF )
  {
    *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v10 + 2) = sub_10075890((_DWORD *)this, a2);
    v6 = v10;
  }
  if ( a2 == *(_BYTE *)(this + 16) )
  {
    *(_BYTE *)(this + 16) = v6;
  }
  else
  {
    if ( sub_10075B30((_DWORD *)this, a2) )
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, a2)) = v10;
    else
      *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * (unsigned __int8)sub_10075890((_DWORD *)this, a2) + 1) = v10;
    v6 = v10;
  }
  result = 3 * v6;
  *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v6) = a2;
  if ( a2 != 0xFF )
  {
    result = *(_DWORD *)(this + 4);
    *(_BYTE *)(result + 12 * a2 + 2) = v6;
  }
  return result;
}
