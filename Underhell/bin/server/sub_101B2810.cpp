void __thiscall sub_101B2810(int this)
{
  int v2; // edi
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st3
  double v8; // st7
  float v9; // [esp+0h] [ebp-1Ch]
  float v10; // [esp+10h] [ebp-Ch] BYREF
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 800) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
    if ( v2 )
    {
      if ( v3 )
      {
        sub_101B0370(&v10, v2, v3);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v4 = *(float *)(this + 868) * v11 + *(float *)(this + 864) * v10 + *(float *)(this + 872) * v12;
        v5 = *(float *)(this + 864) * v4;
        v6 = *(float *)(this + 868) * v4;
        v7 = 1.0
           / (*(float *)(this + 864) * *(float *)(this + 864)
            + *(float *)(this + 868) * *(float *)(this + 868)
            + *(float *)(this + 872) * *(float *)(this + 872));
        v8 = v4 * *(float *)(this + 872) * v7;
        v10 = v5 * v7;
        v11 = v6 * v7;
        v12 = v8;
        sub_101B22B0(this + 884, this, &v10);
        v9 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
        sub_100EC4A0((int *)this, v9, 0);
      }
    }
  }
}
