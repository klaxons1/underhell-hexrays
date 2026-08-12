void __thiscall sub_101B2710(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-28h]
  int v6[3]; // [esp+10h] [ebp-18h] BYREF
  float v7[3]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 800) )
  {
    v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 24))(*(_DWORD *)(this + 800));
    v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 800) + 20))(*(_DWORD *)(this + 800));
    if ( v2 )
    {
      if ( v3 )
      {
        sub_101B03C0(v7, v2, v3);
        if ( *(_DWORD *)(dword_106B9E04 + 48) )
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v4 = *(_DWORD *)(this + 252) >> 11;
          *(float *)v6 = *(float *)(this + 580) + v7[0];
          *(float *)&v6[1] = *(float *)(this + 584) + v7[1];
          *(float *)&v6[2] = *(float *)(this + 588) + v7[2];
          if ( (v4 & 1) != 0 )
            sub_100DAE60(this);
          sub_1011BC50((float *)(this + 580), (float *)v6, 255, 255, 0, 1, 0.1);
        }
        sub_101B22B0(this + 864, this, v7);
        v5 = *(float *)(dword_106B31C8 + 12) + 0.090000004;
        sub_100EC4A0((int *)this, v5, 0);
      }
    }
  }
}
