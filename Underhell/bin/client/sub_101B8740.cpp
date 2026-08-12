int __thiscall sub_101B8740(float *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  double v15; // st6
  double v16; // st5
  double v17; // rt0
  double v18; // st5
  double v19; // st6
  double v20; // st5
  float v22; // [esp+10h] [ebp-2Ch]
  int v23; // [esp+28h] [ebp-14h]
  int v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+30h] [ebp-Ch]
  int v26; // [esp+34h] [ebp-8h]
  int v27; // [esp+38h] [ebp-4h]
  int v28; // [esp+44h] [ebp+8h]
  float v29; // [esp+44h] [ebp+8h]

  result = sub_100422D0();
  if ( result )
  {
    sub_10236050(this + 14);
    v4 = 0;
    this[109] = 0.0;
    this[111] = 0.0;
    v27 = 0;
    v23 = -1;
    v26 = 0;
    while ( 1 )
    {
      v25 = 0;
      do
      {
        v5 = (*(int (__thiscall **)(float *, int, int))(*(_DWORD *)this + 84))(this, v26, v4);
        v24 = v5;
        if ( v5 )
        {
          v6 = *((_DWORD *)this + 109);
          v7 = *((_DWORD *)this + 107);
          if ( v6 + 1 > v7 )
          {
            sub_10118050((_DWORD *)this + 106, v6 - v7 + 1);
            v5 = v24;
          }
          ++*((_DWORD *)this + 109);
          v8 = *((_DWORD *)this + 106);
          v9 = *((_DWORD *)this + 109) - v6 - 1;
          *((_DWORD *)this + 110) = v8;
          if ( v9 > 0 )
          {
            memcpy((void *)(v8 + 8 * v6 + 8), (const void *)(v8 + 8 * v6), 8 * v9);
            v5 = v24;
          }
          v10 = (_DWORD *)(*((_DWORD *)this + 106) + 8 * v6);
          if ( v10 )
          {
            *v10 = v26;
            v10[1] = v25;
          }
          if ( v5 == a2 )
            *((_DWORD *)this + 111) = v27;
          if ( v5 == *((_DWORD *)this + 115) )
            v23 = v27;
          ++v27;
          v4 = v25;
        }
        v25 = ++v4;
      }
      while ( v4 < 20 );
      if ( ++v26 >= 6 )
        break;
      v4 = 0;
    }
    v11 = v23;
    if ( v23 == -1 )
      this[115] = 0.0;
    if ( *((_DWORD *)this + 115) && *((_DWORD *)this + 112) && 0.0 == this[117] )
    {
      v12 = 0;
      v13 = 0;
      v28 = 0;
      if ( v27 > 0 )
      {
        do
        {
          if ( v11 == *((_DWORD *)this + 111) )
            break;
          v14 = *((int *)this + 112) >= 0 ? v11 + 1 : v11 - 1;
          ++v13;
          v11 = (v14 + v27) % v27;
          ++v12;
        }
        while ( v13 < v27 );
        v28 = v12;
      }
      v15 = (double)v28;
      v16 = (this[82] + this[74]) * v15;
      if ( *((int *)this + 112) < 0 )
        v16 = v16 * -1.0;
      v17 = v16;
      v18 = v15;
      v19 = v17;
      v20 = v18 * 0.2;
      v29 = v20;
      if ( v12 > 1 )
      {
        v20 = v20 * 0.5;
        v29 = v20;
      }
    }
    else
    {
      v29 = 0.0;
      *((_DWORD *)this + 115) = a2;
      v20 = 0.0;
      v19 = 0.0;
    }
    this[117] = v19;
    v22 = v20;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10247080((int)(this + 14), "WeaponBoxOffset", 0.0, 0.0, v22, 0, 0.0);
    this[70] = 7.0;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    return sub_10247080((int)(this + 14), "Blur", 0.0, v29, 0.75, 2, 0.0);
  }
  return result;
}
