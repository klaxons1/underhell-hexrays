void __thiscall sub_103AAA70(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // edi
  int *v5; // ecx
  int v6; // [esp+14h] [ebp-4h]

  sub_100422B0((_DWORD *)this);
  v2 = sub_10243040("sprites/blueflare1.vmt", (float *)(this + 716), 0);
  *(_DWORD *)(this + 3888) = v2;
  sub_10128950((int)v2, 3, 255, 255, 255, 0, 14);
  v3 = sub_100BEF30(this, "light");
  v4 = *(_DWORD *)(this + 3888);
  v6 = v3;
  sub_100C0E40((unsigned int *)(v4 + 800), this);
  if ( *(_DWORD *)(v4 + 804) != v6 )
  {
    if ( *(_BYTE *)(v4 + 84) )
    {
      *(_BYTE *)(v4 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(v4 + 24);
      if ( v5 )
        sub_100194B0(v5, 804);
    }
    *(_DWORD *)(v4 + 804) = v6;
  }
  sub_100EACE0((unsigned __int16 *)v4, this, 1);
  sub_10242820(*(_DWORD *)(this + 3888), 0, 0.0);
  sub_102428B0(*(_DWORD *)(this + 3888), 1.4, 0.0);
}
