char __thiscall sub_10056770(
        __int16 *this,
        int a2,
        float a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        float a12)
{
  int v13; // eax
  int v14; // eax
  double v15; // st7
  int *v16; // ecx
  int (__thiscall *v17)(__int16 *); // eax
  int v18; // edi
  int v19; // eax
  int *v20; // ecx
  int v21; // edi
  unsigned __int16 v22; // ax
  float v24; // [esp+14h] [ebp-648h]
  _BYTE v25[1596]; // [esp+20h] [ebp-63Ch] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(__int16 *, int, int))(*(_DWORD *)this + 324))(this, a2, 7)
    && (sub_10037BA0((int)this, &a3),
        sub_1000FCA0(this, 1),
        v13 = sub_10034480(this),
        sub_101028B0(v25, (int)this, v13),
        v14 = sub_1000F480(this, 6, 0, 0, (int)v25),
        (*((_DWORD *)this + 46) = v14) != 0) )
  {
    v15 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v14 + 116))(v14);
    v16 = (int *)*((_DWORD *)this + 46);
    v17 = *(int (__thiscall **)(__int16 *))(*(_DWORD *)this + 36);
    a6 = a6 * v15;
    a7 = a7 * v15;
    a8 = v15 * a8;
    v18 = *v16;
    v19 = v17(this);
    (*(void (__thiscall **)(_DWORD, float *, int))(v18 + 240))(*((_DWORD *)this + 46), &a6, v19);
    v20 = (int *)*((_DWORD *)this + 46);
    v21 = *v20;
    v22 = (*(int (__thiscall **)(int *))(*v20 + 92))(v20);
    (*(void (__thiscall **)(_DWORD, int))(v21 + 88))(*((_DWORD *)this + 46), v22 | 0xC);
    v24 = *((float *)off_103DC81C + 3) + a12;
    (*(void (__thiscall **)(__int16 *, _DWORD))(*(_DWORD *)this + 408))(this, LODWORD(v24));
    return 1;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*((_DWORD *)this + 2) + 4))((_DWORD *)this + 2);
    return 0;
  }
}
