void __thiscall sub_101208F0(int this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // esi
  float v6; // eax
  int v7[64]; // [esp+14h] [ebp-150h] BYREF
  int v8; // [esp+16Ch] [ebp+8h]

  if ( 0.0 != *(float *)(this + 980) )
  {
    if ( (*(_BYTE *)(this + 970) || *(float *)(this + 808) < 0.0)
      && *(_BYTE *)(a2 + 306) == 6
      && *(_BYTE *)(a2 + 225) <= 1u )
    {
      sub_101CA9F0(this, a2, 1, 4.0);
    }
    else
    {
      v3 = (_DWORD *)sub_10248110(this, this, *(float *)(this + 980), 1, 0);
      sub_100D9E70((int *)a2, a2, v3);
    }
  }
  if ( !*(_BYTE *)(this + 970) )
  {
    if ( *(float *)(this + 808) >= 0.0 )
    {
      if ( *(_DWORD *)(this + 800) == 3 )
        sub_101206D0(this);
      else
        sub_10120480(this);
    }
    if ( *(_DWORD *)(this + 260) )
    {
      v4 = 0;
      v8 = sub_1011F730((_DWORD *)this, (int)v7, 64);
      if ( v8 > 0 )
      {
        do
        {
          v5 = v7[v4];
          if ( *(float *)(v5 + 808) >= 0.0 )
          {
            if ( *(_BYTE *)(this + 971)
              && *(float *)(v5 + 916) == *(float *)(this + 916)
              && *(float *)(v5 + 920) == *(float *)(this + 920)
              && *(float *)(v5 + 924) == *(float *)(this + 924) )
            {
              if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
                sub_100DAFD0(this);
              if ( (*(_DWORD *)(v5 + 252) & 0x1000) != 0 )
                sub_100DAFD0(v5);
              if ( sub_10018CD0((float *)(v5 + 476), (float *)(this + 476))
                && sub_10018CD0((float *)(v5 + 488), (float *)(this + 488)) )
              {
                v6 = *(float *)v5;
                *(_DWORD *)(v5 + 244) = *(_DWORD *)(this + 244);
                if ( (*(unsigned __int8 (__thiscall **)(int))(LODWORD(v6) + 728))(v5) )
                {
                  sub_100E11A0(v5, (float *)(this + 728));
                  sub_100D7260((float *)v5, &flt_106F1CB4);
                }
                else
                {
                  sub_100E10C0(v5, (float *)(this + 716));
                  sub_100DD660(v5, &flt_106F1CA8);
                }
              }
            }
            if ( *(_DWORD *)(v5 + 800) == 3 )
              sub_101206D0(v5);
            else
              sub_10120480(v5);
          }
          ++v4;
        }
        while ( v4 < v8 );
      }
    }
  }
}
