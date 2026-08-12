void __thiscall sub_10121840(int this)
{
  double v2; // st4
  double v3; // st7
  float *v4; // eax
  float *v5; // ecx
  double v6; // st7
  double v7; // rt2
  double v8; // rtt
  float v9; // edx
  double v10; // st6
  double v11; // st7
  float v12; // [esp+8h] [ebp-Ch]
  float v13; // [esp+Ch] [ebp-8h]

  sub_10121570((float *)this);
  sub_10246A60(this);
  if ( (*(_DWORD *)(this + 248) & 2) != 0 )
  {
    v2 = *(float *)(this + 848);
    v3 = *(float *)(this + 844) * -1.0;
    *(float *)(this + 840) = *(float *)(this + 840) * -1.0;
    *(float *)(this + 844) = v3;
    *(float *)(this + 848) = -1.0 * v2;
  }
  v4 = (float *)(this + 852);
  *(float *)(this + 852) = *(float *)(this + 728);
  v5 = (float *)(this + 864);
  *(float *)(this + 856) = *(float *)(this + 732);
  *(float *)(this + 860) = *(float *)(this + 736);
  v6 = *(float *)(this + 804);
  v7 = *(float *)(this + 844) * v6 + *(float *)(this + 732);
  v8 = v6 * *(float *)(this + 848) + *(float *)(this + 736);
  *(float *)(this + 864) = *(float *)(this + 840) * v6 + *(float *)(this + 728);
  *(float *)(this + 868) = v7;
  *(float *)(this + 872) = v8;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v12 = *v5;
    v13 = *(float *)(this + 868);
    v9 = *(float *)(this + 872);
    *v5 = *v4;
    *(float *)(this + 868) = *(float *)(this + 856);
    *(float *)(this + 872) = *(float *)(this + 860);
    *v4 = v12;
    *(float *)(this + 856) = v13;
    *(float *)(this + 860) = v9;
    v10 = -*(float *)(this + 844);
    v11 = -*(float *)(this + 848);
    *(float *)(this + 840) = -*(float *)(this + 840);
    *(float *)(this + 844) = v10;
    *(float *)(this + 848) = v11;
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)this + 416))(this, 0, this + 852, 0);
LABEL_5:
    *(_DWORD *)(this + 800) = 1;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(this + 976) != 1 )
    goto LABEL_5;
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)this + 416))(this, 0, this + 864, 0);
  *(_DWORD *)(this + 800) = 0;
LABEL_6:
  if ( *(_BYTE *)(this + 1228) )
    sub_10112C00(this + 320, 1);
}
