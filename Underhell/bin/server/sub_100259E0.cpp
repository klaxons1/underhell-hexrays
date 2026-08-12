void __thiscall sub_100259E0(int this, char a2)
{
  int v3; // edi
  double v4; // st5
  double v5; // st3
  double v6; // st6
  double v7; // st3
  int v8; // eax
  int i; // edi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi

  if ( *(int *)(this + 2352) <= 0 )
  {
    if ( !*(_BYTE *)(this + 2680) && *(_DWORD *)(this + 2324) != 4 )
    {
      if ( (*(_BYTE *)(this + 2356) & 1) != 0 && !sub_10023D10((_DWORD *)this, 1) )
      {
        *(_DWORD *)(this + 2352) = 2;
        sub_100204D0((_DWORD *)this);
      }
      if ( (*(_BYTE *)(this + 2356) & 2) != 0 && sub_10023D10((_DWORD *)this, 1) )
        *(_DWORD *)(this + 2356) = *(_DWORD *)(this + 2356) & 0xFFFFFFFC | 1;
    }
  }
  else
  {
    if ( *(int *)(dword_106B31C8 + 20) > 1 || (v3 = sub_10261B20()) == 0 )
    {
      if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      {
        Warning("CAI_BaseNPC::UpdateSleepState called with NULL pLocalPlayer\n");
        return;
      }
      goto LABEL_15;
    }
    if ( *(float *)(this + 2360) > 0.1 && (*(_DWORD *)(v3 + 256) & 0x8000) == 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v4 = *(float *)(v3 + 588) - *(float *)(this + 588);
      v5 = *(float *)(v3 + 584) - *(float *)(this + 584);
      v6 = v5 * v5;
      v7 = *(float *)(v3 + 580) - *(float *)(this + 580);
      if ( *(float *)(this + 2360) * *(float *)(this + 2360) >= v7 * v7 + v6 + v4 * v4 )
      {
LABEL_15:
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1412))(this, 1);
        return;
      }
    }
    v8 = *(_DWORD *)(this + 2352);
    if ( v8 == 2 )
    {
      if ( a2 )
        goto LABEL_15;
    }
    else if ( v8 == 1 )
    {
      if ( sub_10023D10((_DWORD *)this, 17) || sub_10023D10((_DWORD *)this, 18) )
        goto LABEL_15;
      if ( a2 )
      {
        for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
        {
          v10 = (_DWORD *)sub_1025FB50(i);
          if ( v10
            && (v10[64] & 0x8000) == 0
            && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, _DWORD))(*v10 + 548))(v10, this, 16449, 0) )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1412))(this, 1);
          }
        }
      }
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)this + 1452))(this) & 8) != 0 && (*(_BYTE *)(this + 248) & 1) == 0 )
      {
        v11 = sub_1023C720();
        if ( v11 != -1 )
        {
          while ( 1 )
          {
            v12 = sub_1023C740(v11);
            v13 = v12;
            if ( (*(_BYTE *)(v12 + 16) & 8) != 0
              && (unsigned __int8)sub_100AAF00(v12)
              && sub_1001FDB0((int *)this, (_DWORD *)v13) )
            {
              break;
            }
            v11 = *(__int16 *)(v13 + 28);
            if ( v11 == -1 )
              return;
          }
          (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1412))(this, 1);
        }
      }
    }
  }
}
