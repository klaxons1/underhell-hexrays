int __thiscall sub_100FA8E0(int **this, int a2)
{
  int **v2; // edi
  unsigned int v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v10[0] = a2;
  v10[1] = 0;
  if ( !sub_100FA5A0((int (__cdecl **)(_DWORD))this + 1, (int)v10, &a2, &v11) || (v3 = v11 | (a2 << 16), v3 == -1) )
  {
    if ( sub_100FA5A0((int (__cdecl **)(_DWORD))v2, (int)v10, &a2, &v11) )
    {
      v3 = v11 | (a2 << 16);
    }
    else
    {
      v4 = a2;
      v3 = (v4 << 16) | sub_100F9FF0(&(*v2)[5 * a2], (*v2)[5 * a2 + 3], v10);
    }
    v5 = (_DWORD *)sub_100DDA40(544);
    if ( v5 )
      v6 = sub_100FA860(v5);
    else
      v6 = 0;
    v7 = 5 * HIWORD(v3);
    v8 = 8 * (unsigned __int16)v3;
    *(_DWORD *)((*v2)[v7] + v8 + 4) = v6;
    memset(*(void **)((*v2)[v7] + v8 + 4), 0, 0x220u);
  }
  return *(_DWORD *)((*v2)[5 * HIWORD(v3)] + 8 * (unsigned __int16)v3 + 4);
}
