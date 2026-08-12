void __thiscall sub_1029C580(_BYTE *this, _DWORD *a2)
{
  int v3; // ecx
  int v4; // eax
  void (__thiscall *v5)(_BYTE *, _DWORD); // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void (__thiscall *v9)(_BYTE *, _DWORD); // eax
  int v10; // [esp-4h] [ebp-8h]

  switch ( *a2 )
  {
    case 0x186A1:
      v3 = *(_DWORD *)(*((_DWORD *)this + 1) + 2604);
      goto LABEL_3;
    case 0x186A2:
      if ( sub_10027B80(*((void **)this + 1)) )
      {
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 1644))(*((_DWORD *)this + 1), 1001);
        v10 = *((_DWORD *)this + 1);
        v4 = sub_1026A890((unsigned int *)this + 5);
        sub_102CD970(v4, v10);
        sub_10021880(*((void **)this + 1));
        v5 = *(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12);
        this[24] = 1;
        v5(this, 0);
        sub_10039F40(*((int **)this + 1), 330);
      }
      return;
    case 0x186A3:
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(*((_DWORD *)this + 1) + 2820) )
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      v6 = sub_1026A890((unsigned int *)this + 5);
      if ( (unsigned __int8)sub_102CA2D0(v6) )
      {
        *(float *)(*((_DWORD *)this + 1) + 2740) = *(float *)(dword_106B31C8 + 12);
        v7 = sub_1026A890((unsigned int *)this + 5);
        sub_102CE130(v7);
        if ( (unsigned __int8)sub_102DC130(this + 20) )
        {
          (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
          return;
        }
      }
      else
      {
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      if ( !*(_DWORD *)(sub_1026A890((unsigned int *)this + 5) + 1016) )
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      return;
    case 0x186A4:
    case 0x186A5:
      v3 = *(_DWORD *)(*((_DWORD *)this + 1) + 2604);
LABEL_3:
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 76))(v3, -1);
      if ( sub_10021530(*((_DWORD **)this + 1)) )
        (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      return;
    case 0x186A6:
      v8 = sub_1026A890((unsigned int *)this + 5);
      sub_102CAAA0(v8);
      v9 = *(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 12);
      *((float *)this + 7) = *(float *)(dword_106B31C8 + 12) + 10.0;
      v9(this, 0);
      return;
    default:
      sub_1004B450(this, (int)a2);
      return;
  }
}
