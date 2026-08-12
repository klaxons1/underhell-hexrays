int __thiscall sub_100FA1D0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD v9[2]; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v9[0] = a2;
  v9[1] = 0;
  if ( !(unsigned __int8)sub_100FA5A0(v9, &a2, &v10) || (v3 = v10 | (a2 << 16), v3 == -1) )
  {
    if ( (unsigned __int8)sub_100FA5A0(v9, &a2, &v10) )
    {
      v3 = v10 | (a2 << 16);
    }
    else
    {
      v4 = a2;
      v3 = (v4 << 16) | sub_100F9FF0((int *)(*v2 + 20 * a2), *(_DWORD *)(*v2 + 20 * a2 + 12), v9);
    }
    v5 = sub_100DDA40(172);
    v6 = 20 * HIWORD(v3);
    v7 = 8 * (unsigned __int16)v3;
    *(_DWORD *)(*(_DWORD *)(v6 + *v2) + v7 + 4) = v5;
    memset(*(void **)(*(_DWORD *)(v6 + *v2) + v7 + 4), 0, 0xACu);
  }
  return *(_DWORD *)(*(_DWORD *)(*v2 + 20 * HIWORD(v3)) + 8 * (unsigned __int16)v3 + 4);
}
