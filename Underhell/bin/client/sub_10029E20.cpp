char __thiscall sub_10029E20(int this, int a2, float *a3, float *a4)
{
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // esi
  float *v8; // eax
  int (__thiscall *v9)(_DWORD *); // edx
  float *v10; // eax
  int v11; // ecx

  if ( (*(_BYTE *)(this + 112) & 1) != 0
    && (*(_DWORD *)(this + 112) & 0x80) != 0
    && (v5 = *(_DWORD *)(this + 324), v5 != -1)
    && (v6 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v5 >> 12)
    && (v7 = (_DWORD *)*v6) != 0 )
  {
    v8 = (float *)(*(int (__thiscall **)(_DWORD))(*v7 + 268))(*v6);
    *a3 = *v8;
    a3[1] = v8[1];
    v9 = *(int (__thiscall **)(_DWORD *))(v7[1] + 8);
    a3[2] = v8[2];
    v10 = (float *)v9(v7 + 1);
    *a4 = *v10;
    a4[1] = v10[1];
    a4[2] = v10[2];
  }
  else
  {
    v11 = *(_DWORD *)(this + 1872);
    if ( !v11 || (LOBYTE(v10) = sub_1001A8D0(v11, (int)a3, (int)a4), !(_BYTE)v10) )
      LOBYTE(v10) = sub_10034760(a2, a3, a4);
  }
  return (char)v10;
}
