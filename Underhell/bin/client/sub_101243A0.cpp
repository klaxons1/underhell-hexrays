int __thiscall sub_101243A0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  double v7; // st7
  char *v8; // eax
  double v9; // st6
  int v10; // eax
  double v11; // rt0
  double v12; // st6
  double v13; // st7
  double v14; // st7
  int result; // eax
  float v16; // [esp+Ch] [ebp-24h]
  float v17; // [esp+10h] [ebp-20h]
  int v18; // [esp+20h] [ebp-10h] BYREF
  float v19; // [esp+24h] [ebp-Ch]
  float v20; // [esp+28h] [ebp-8h]
  int v21; // [esp+2Ch] [ebp-4h]

  sub_1008FA90(this + 352, 0);
  sub_10035C70((_BYTE *)this, 0, 0);
  v2 = *(_DWORD *)(this + 1220);
  *(float *)&v21 = 0.0;
  if ( v2 != COERCE_INT(0.0) )
    *(float *)(this + 1220) = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 128))(this);
  v3 = *(_DWORD *)this;
  v4 = sub_10034E90((_DWORD *)this);
  (*(void (__thiscall **)(int, int))(v3 + 592))(this, v4);
  sub_1008FCF0((int *)(this + 352), 4, 0, 0);
  v5 = *(_DWORD *)dword_10413178;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4);
  *(float *)&v21 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(v5 + 32))(dword_10413178, v6));
  *(float *)(this + 1260) = (double)v21 - 1.0;
  sub_1000DF30((_DWORD *)this, 80);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 408))(this, -1293.0);
  sub_10124230(this);
  v7 = 0.0;
  if ( 0.0 != *((float *)sub_10034AE0((char *)this) + 1) )
  {
    v7 = 0.0;
    if ( 0.0 == *((float *)sub_10034AE0((char *)this) + 2) )
    {
      v8 = sub_10034AE0((char *)this);
      v18 = *(_DWORD *)v8;
      v19 = *((float *)v8 + 1);
      v20 = v19;
      v19 = 0.0;
      sub_10034B10((float *)this, (float *)&v18);
      v7 = 0.0;
    }
  }
  v9 = *(float *)(this + 1236);
  if ( v9 < v7 || v9 > 64.0 )
  {
    v9 = 64.0;
    if ( *(float *)(this + 1236) <= 64.0 )
    {
      if ( v7 <= *(float *)(this + 1236) )
      {
        v21 = (int)*(float *)(this + 1236);
        v9 = (double)v21;
      }
      else
      {
        *(float *)&v21 = 0.0;
        v9 = (double)0;
      }
    }
  }
  v10 = *(unsigned __int8 *)(this + 91);
  v11 = v9;
  v12 = v7;
  v13 = v11;
  *(float *)&v21 = v12;
  if ( *(_DWORD *)(this + 1228) != v10 )
    *(_DWORD *)(this + 1228) = v10;
  if ( *(_DWORD *)(this + 1232) != v21 )
    *(float *)(this + 1232) = v12;
  v17 = v12;
  v16 = v13;
  sub_10123F00(this, v16, v17);
  v14 = *(float *)(this + 1236);
  result = *(_DWORD *)(this + 1228);
  *(float *)(this + 1268) = *(float *)(this + 1236);
  *(float *)(this + 1264) = v14;
  *(_DWORD *)(this + 1280) = result;
  *(_DWORD *)(this + 1276) = result;
  return result;
}
