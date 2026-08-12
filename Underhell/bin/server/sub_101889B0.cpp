char __thiscall sub_101889B0(float *this, int a2)
{
  int v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void (__thiscall *v9)(float *); // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  float *v15; // ecx
  int v16; // eax
  double v17; // st7
  double v18; // st6
  float *v19; // eax
  double v20; // st4
  double v21; // st7
  double v22; // st4
  double v23; // st5
  float v24; // [esp+0h] [ebp-Ch]
  float v25; // [esp+0h] [ebp-Ch]
  float v26; // [esp+14h] [ebp+8h]

  if ( !a2 )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 724))(this);
    return 0;
  }
  v4 = *((_DWORD *)this + 225);
  v5 = 0.0;
  if ( v4 == a2 )
  {
    if ( this[218] <= (double)this[141] )
    {
      v6 = *((_DWORD *)this + 221);
      this[224] = 0.0;
      *((_DWORD *)this + 220) = v6;
      if ( a2 == 1 )
      {
        v7 = *(_DWORD *)(v6 + 848);
      }
      else if ( a2 == -1 )
      {
        v7 = *(_DWORD *)(v6 + 852);
      }
      else
      {
        v7 = v6;
      }
      if ( !v7 )
      {
        v8 = *(_DWORD *)this;
        this[218] = 0.0;
        v9 = *(void (__thiscall **)(float *))(v8 + 724);
        this[217] = 0.0;
        v9(this);
        return 0;
      }
      if ( a2 == 1 )
      {
        this[221] = *(float *)(v6 + 848);
      }
      else
      {
        if ( a2 == -1 )
          v6 = *(_DWORD *)(v6 + 852);
        *((_DWORD *)this + 221) = v6;
      }
    }
  }
  else
  {
    if ( v4 )
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 724))(this);
      v5 = 0.0;
    }
    *((_DWORD *)this + 225) = a2;
    if ( a2 == 1 )
    {
      this[221] = *(float *)(*((_DWORD *)this + 220) + 848);
    }
    else if ( a2 == -1 )
    {
      if ( v5 >= this[224] )
      {
        this[221] = *(float *)(*((_DWORD *)this + 220) + 852);
      }
      else
      {
        v10 = *((_DWORD *)this + 220);
        *((_DWORD *)this + 221) = v10;
        this[220] = *(float *)(v10 + 848);
      }
    }
    v11 = *((_DWORD *)this + 221);
    if ( !v11 )
    {
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 724))(this);
      return 0;
    }
    if ( a2 == 1 )
    {
      v12 = *(_DWORD *)(v11 + 848);
    }
    else if ( a2 == -1 )
    {
      v12 = *(_DWORD *)(v11 + 852);
    }
    else
    {
      v12 = *((_DWORD *)this + 221);
    }
    *((_DWORD *)this + 223) = v12;
    if ( !v12 )
      *((_DWORD *)this + 223) = v11;
    v13 = *((_DWORD *)this + 220);
    if ( a2 == 1 )
    {
      v14 = *(_DWORD *)(v13 + 852);
    }
    else if ( a2 == -1 )
    {
      v14 = *(_DWORD *)(v13 + 848);
    }
    else
    {
      v14 = *((_DWORD *)this + 220);
    }
    *((_DWORD *)this + 222) = v14;
    if ( !v14 )
      *((_DWORD *)this + 222) = v13;
  }
  v15 = (float *)*((_DWORD *)this + 221);
  if ( !v15 )
    return 0;
  if ( *((_DWORD *)this + 225) == 1 )
  {
    v16 = *((_DWORD *)this + 220);
    v17 = this[141] - this[224];
    this[217] = v17;
    v18 = *(float *)(v16 + 844);
  }
  else
  {
    if ( this[224] != v5 )
      this[224] = v15[211] - this[224];
    v17 = this[141] - this[224];
    this[217] = v17;
    v18 = v15[211];
  }
  v19 = (float *)*((_DWORD *)this + 220);
  this[218] = v18 + this[141] - this[224];
  v26 = this[218] - v17;
  v20 = v19[200] - v15[200];
  v21 = v20 * v20;
  v22 = v19[201] - v15[201];
  v23 = v19[202] - v15[202];
  v24 = v23 * v23 + v22 * v22 + v21;
  this[219] = v26 / off_10689708(v24);
  v25 = this[218] - this[141];
  sub_100D8290(this, v25);
  return 1;
}
