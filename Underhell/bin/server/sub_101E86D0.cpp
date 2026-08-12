char __thiscall sub_101E86D0(float *this, int a2)
{
  int v3; // eax
  int v4; // edx
  float v5; // edi
  int v6; // eax
  int v7; // edx
  float v8; // edi
  int v9; // eax

  if ( (unsigned int)a2 > 6 )
    return 0;
  if ( a2 > 3 && sub_100D8840(this) > 1 )
  {
    if ( *(_DWORD *)(dword_106B4C1C + 48) == 1 )
    {
      a2 = 4;
    }
    else if ( *(_DWORD *)(dword_106B4C1C + 48) == 2 )
    {
      a2 = 3;
    }
  }
  v3 = *((_DWORD *)this + 870);
  if ( v3 > 1 )
    *((_DWORD *)this + 875) = v3;
  sub_100F7BC0((_DWORD *)this + 870, &a2);
  switch ( a2 )
  {
    case 0:
    case 1:
    case 3:
      sub_100F8040((int)this, (int)this, 0, 0.0, 0);
      sub_100DC4E0(this, &flt_106F1CA8);
      sub_100E0970((int)this, v4, 0, 0);
      break;
    case 4:
    case 5:
      v5 = *this;
      v6 = sub_1026A890(this + 876);
      (*(void (__thiscall **)(float *, int))(LODWORD(v5) + 1336))(this, v6);
      goto LABEL_14;
    case 6:
      sub_100F8040((int)this, (int)this, 0, 0.0, 0);
      v8 = *this;
      v9 = sub_1026A890(this + 876);
      (*(void (__thiscall **)(float *, int))(LODWORD(v8) + 1336))(this, v9);
      sub_100DC4E0(this, &flt_106F1CA8);
LABEL_14:
      sub_100E0970((int)this, v7, 10, 0);
      break;
    default:
      break;
  }
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1360))(this);
  return 1;
}
