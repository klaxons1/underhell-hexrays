unsigned int __thiscall sub_102BA040(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  void (__noreturn ***v18)(); // eax
  unsigned int result; // eax
  _DWORD *v20; // edi
  int v21; // ebx
  int *v22; // ecx
  float v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_102B7DB0(this, 0);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/props_combine/combine_mine01.mdl");
  sub_10112C00(this + 320, 6);
  *(_DWORD *)(this + 1136) = -1;
  if ( *(_BYTE *)(this + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 1;
  }
  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  *(_DWORD *)(this + 1148) = sub_100BD5F0(v4, "blendnorth");
  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  *(_DWORD *)(this + 1152) = sub_100BD5F0(v7, "blendeast");
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v9 = *(_DWORD **)(this + 1100);
  if ( v9 && *v9 )
    v10 = *(_DWORD *)(this + 1100);
  else
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  *(_DWORD *)(this + 1156) = sub_100BD5F0(v10, "blendsouth");
  v11 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v12 = *(_DWORD **)(this + 1100);
  if ( v12 && *v12 )
    v13 = *(_DWORD *)(this + 1100);
  else
    v13 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
  v14 = sub_100BD5F0(v13, "blendstates");
  *(float *)(this + 1144) = 0.0;
  *(_DWORD *)(this + 1160) = v14;
  if ( *(_DWORD *)(this + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 100;
  }
  *(_BYTE *)(this + 1129) = 1;
  v15 = sub_100BDCE0(this, 1);
  sub_100C1170(this, v15);
  sub_102B7300((volatile signed __int32 *)this, 1);
  v16 = 0;
  *(_BYTE *)(this + 1178) = 0;
  *(_DWORD *)(this + 1180) = 0;
  v17 = *(_DWORD *)(this + 300);
  if ( v17 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] != v17 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  }
  *(float *)(this + 1196) = 3.4028235e38;
  if ( *(_BYTE *)(this + 1176) )
  {
    *(_DWORD *)(this + 1204) = 0;
    v18 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v18)[12])(
      v18,
      *(_DWORD *)(this + 1164),
      0.0,
      0.1);
    sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
    result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  }
  else
  {
    *(_DWORD *)(this + 1204) = 1;
    sub_102B7300((volatile signed __int32 *)this, 1);
    sub_102B7B10((float *)this, 1, 0, 0, 255, 190);
    sub_100EC3F0((_DWORD *)this, (int)sub_102B7820, 0.0, 0);
    *(_DWORD *)(this + 196) = 0;
    v23 = *(float *)(dword_106B31C8 + 12) + 0.1;
    result = sub_100EC4A0((int *)this, v23, 0);
  }
  if ( *(_DWORD *)(this + 1184) == 1 )
  {
    v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 44))(this);
    v24 = 0;
    if ( (int)v20[1] <= 0 )
    {
LABEL_45:
      result = dword_10661140;
      v21 = dword_10661140;
      if ( *(_DWORD *)(this + 848) != dword_10661140 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v22 = *(int **)(this + 24);
          if ( v22 )
            sub_100194B0(v22, 848);
        }
        *(_DWORD *)(this + 848) = v21;
        result = dword_10661140;
      }
      if ( result >= 2 )
      {
        dword_10661140 = 1;
        *(_BYTE *)(this + 1177) = 1;
        return result;
      }
      dword_10661140 = ++result;
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(*v20 + v16 + 18) & 0x14) != 0 )
        {
          result = _stricmp(*(const char **)(*v20 + v16 + 20), "Skin");
          if ( !result )
            break;
        }
        v16 += 52;
        if ( ++v24 >= v20[1] )
          goto LABEL_45;
      }
    }
    *(_BYTE *)(this + 1177) = 1;
  }
  return result;
}
