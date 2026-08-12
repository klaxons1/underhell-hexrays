void __thiscall sub_1010F310(int this, int a2)
{
  char v3; // al
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  double v9; // st7
  int v10; // eax
  float v11; // [esp+4h] [ebp-Ch] BYREF
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+Ch] [ebp-4h]

  if ( *((float *)off_103DC81C + 3) != *(float *)(this + 748) )
  {
    *(float *)(this + 748) = *((float *)off_103DC81C + 3);
    v3 = sub_10114380(this + 4);
    *(_BYTE *)(this + 752) = v3;
    if ( v3 )
    {
      v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
      v11 = *v4;
      v12 = v4[1];
      v13 = v4[2];
      sub_10114B80(this + 4, &v11, this + 708, this + 720);
      v5 = v11;
      *(float *)(this + 708) = *(float *)(this + 708) - v11;
      v6 = v12;
      *(float *)(this + 712) = *(float *)(this + 712) - v12;
      v7 = v13;
      *(float *)(this + 716) = *(float *)(this + 716) - v13;
      *(float *)(this + 720) = *(float *)(this + 720) - v5;
      *(float *)(this + 724) = *(float *)(this + 724) - v6;
      *(float *)(this + 728) = *(float *)(this + 728) - v7;
      sub_1010EE60((float *)this);
    }
    else
    {
      v8 = -*(float *)(this + 744);
      *(float *)(this + 708) = v8;
      *(float *)(this + 712) = v8;
      *(float *)(this + 716) = v8;
      v9 = *(float *)(this + 744);
      *(float *)(this + 720) = *(float *)(this + 744);
      *(float *)(this + 724) = v9;
      *(float *)(this + 728) = v9;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 8))(*(_DWORD *)(this + 12)) )
      {
        v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 28) + 68))(*(_DWORD *)(this + 28));
        sub_101150C0(this + 4, v10);
      }
      sub_1010EE60((float *)this);
    }
  }
}
