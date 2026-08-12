void __thiscall sub_10037CA0(int this, float *a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  int v5; // ebx
  float *v6; // ecx
  _BYTE v7[48]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v8[48]; // [esp+38h] [ebp-30h] BYREF

  sub_10037F50(this);
  if ( *(float *)(this + 512) != *a2 || *(float *)(this + 516) != a2[1] || *(float *)(this + 520) != a2[2] )
  {
    sub_1000F6C0(this, 2);
    *(_DWORD *)(this + 312) &= ~0x800u;
    *(float *)(this + 512) = *a2;
    *(float *)(this + 516) = a2[1];
    *(float *)(this + 520) = a2[2];
    sub_101EE440(a2, this + 660);
    sub_101EDA20(this + 500, 3, this + 660);
    v3 = *(_DWORD *)(this + 324);
    if ( v3 != -1
      && (v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 324) & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 324) & 0xFFF) + 2) == v3 >> 12)
      && (v5 = *v4) != 0 )
    {
      v6 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 40))(*v4);
      if ( *(float *)(this + 512) == *v6 && *(float *)(this + 516) == v6[1] && *(float *)(this + 520) == v6[2] )
      {
        *(float *)(this + 604) = 0.0;
        *(float *)(this + 608) = 0.0;
        *(float *)(this + 612) = 0.0;
      }
      else
      {
        sub_10037F50(v5);
        sub_101F0AB0(v5 + 660, v8);
        sub_101EDC00(v8, this + 660, v7);
        sub_101ED7B0(v7, this + 604);
      }
    }
    else
    {
      *(float *)(this + 604) = *a2;
      *(float *)(this + 608) = a2[1];
      *(float *)(this + 612) = a2[2];
    }
  }
}
