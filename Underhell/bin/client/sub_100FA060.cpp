int __thiscall sub_100FA060(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD v11[2]; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v11[0] = a2;
  v11[1] = 0;
  if ( !(unsigned __int8)sub_100FA5A0(v11, &a2, &v12) || (v3 = v12 | (a2 << 16), v3 == -1) )
  {
    if ( (unsigned __int8)sub_100FA5A0(v11, &a2, &v12) )
    {
      v3 = v12 | (a2 << 16);
    }
    else
    {
      v4 = a2;
      v3 = (v4 << 16) | sub_100F9FF0((int *)(*v2 + 20 * a2), *(_DWORD *)(*v2 + 20 * a2 + 12), v11);
    }
    v5 = (_DWORD *)sub_100DDA40(12);
    if ( v5 )
    {
      *v5 = -1;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    v7 = 20 * HIWORD(v3);
    v8 = 8 * (unsigned __int16)v3;
    *(_DWORD *)(*(_DWORD *)(v7 + *v2) + v8 + 4) = v6;
    v9 = *(_DWORD **)(*(_DWORD *)(v7 + *v2) + v8 + 4);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
  }
  return *(_DWORD *)(*(_DWORD *)(*v2 + 20 * HIWORD(v3)) + 8 * (unsigned __int16)v3 + 4);
}
