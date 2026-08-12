void __thiscall sub_10369260(volatile signed __int32 *this, float *a2)
{
  float v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-Ch]

  v3 = *a2;
  if ( *(_DWORD *)a2 == 2050 )
  {
    sub_1023C380(this, (int)"NPC_Fisherman.FootstepLeft", a2[3], 0);
  }
  else if ( LODWORD(v3) == 2051 )
  {
    sub_1023C380(this, (int)"NPC_Fisherman.FootstepRight", a2[3], 0);
  }
  else if ( LODWORD(v3) == dword_106E7FF4 )
  {
    v4 = *((_DWORD *)this + 1421);
    if ( v4 != -1 )
    {
      sub_100C4FB0(this, v4, 0.2, 0.2);
      *((_DWORD *)this + 1421) = -1;
    }
    v7 = dword_106E7FFC;
    *((_DWORD *)this + 1422) = dword_106E7FFC;
    *((_DWORD *)this + 1421) = sub_100C74B0(this, v7, 0);
  }
  else if ( LODWORD(v3) == dword_106E7FF0 )
  {
    v5 = *((_DWORD *)this + 1421);
    if ( v5 != -1 )
    {
      sub_100C4FB0(this, v5, 0.2, 0.2);
      *((_DWORD *)this + 1421) = -1;
    }
    v8 = dword_106E7FF8;
    *((_DWORD *)this + 1422) = dword_106E7FF8;
    *((_DWORD *)this + 1421) = sub_100C74B0(this, v8, 0);
  }
  else if ( LODWORD(v3) == dword_106E7FEC )
  {
    *((_DWORD *)this + 1421) = sub_100C74B0(this, *((_DWORD *)this + 1422), 0);
  }
  else if ( LODWORD(v3) == dword_106E7FE8 )
  {
    v6 = *((_DWORD *)this + 1421);
    if ( v6 != -1 )
    {
      sub_100C4FB0(this, v6, 0.2, 0.2);
      *((_DWORD *)this + 1421) = -1;
    }
  }
  else
  {
    sub_10399420(a2);
  }
}
