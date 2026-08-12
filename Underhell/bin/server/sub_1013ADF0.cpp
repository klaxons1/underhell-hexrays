int __thiscall sub_1013ADF0(int this, int a2)
{
  int result; // eax
  bool v5; // zf
  double v6; // st7
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  double v10; // st7
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD v14[1024]; // [esp+20h] [ebp-103Ch] BYREF
  _BYTE v15[16]; // [esp+1020h] [ebp-3Ch] BYREF
  float v16; // [esp+1030h] [ebp-2Ch]
  float v17[3]; // [esp+1034h] [ebp-28h] BYREF
  float v18[3]; // [esp+1040h] [ebp-1Ch] BYREF
  float v19; // [esp+104Ch] [ebp-10h]
  float v20; // [esp+1050h] [ebp-Ch]
  char v21[4]; // [esp+1054h] [ebp-8h]
  float v22; // [esp+1058h] [ebp-4h]
  float v23; // [esp+1064h] [ebp+8h]
  int v24; // [esp+1064h] [ebp+8h]
  int v25; // [esp+1064h] [ebp+8h]
  int i; // [esp+1064h] [ebp+8h]

  result = *(_DWORD *)(this + 248);
  if ( (result & 0x20) == 0 || (result & 0x40) == 0 )
  {
    v5 = (*(_BYTE *)(this + 248) & 1) == 0;
    v21[0] = (result & 4) != 0;
    if ( v5 )
      v6 = *(float *)(this + 812);
    else
      v6 = 0.0;
    v7 = *(_DWORD *)(this + 252) >> 11;
    v20 = *(float *)(this + 808);
    v19 = *(float *)(this + 804);
    v22 = *(float *)(this + 800);
    if ( (v7 & 1) != 0 )
      sub_100DAE60(this);
    v23 = v6;
    result = sub_10261B70(this + 580, v22, v19, v20, v23, a2, v21[0]);
  }
  if ( (*(_BYTE *)(this + 248) & 0x10) != 0 )
  {
    v24 = *(int *)(this + 804);
    v8 = *(_DWORD *)(this + 252) >> 11;
    v22 = *(float *)(this + 812);
    if ( (v8 & 1) != 0 )
      sub_100DAE60(this);
    result = sub_1021A8D0(this + 580, v22, *(float *)&v24);
  }
  if ( (*(_BYTE *)(this + 248) & 8) != 0 )
  {
    if ( !*(_DWORD *)(this + 840) )
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this + 844);
      *(_DWORD *)(this + 840) = result;
    }
    switch ( a2 )
    {
      case 0:
      case 4:
      case 5:
        v9 = *(_DWORD *)(this + 840);
        *(float *)(this + 816) = *(float *)(this + 808) + *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 820) = 0.0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 24))(v9);
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
        *(float *)(this + 824) = *(float *)(this + 800);
        v10 = *(float *)(this + 812);
        v25 = *(int *)(this + 812);
        if ( 0.0 == v10 )
        {
          v10 = 512.0;
          *(float *)&v25 = 512.0;
        }
        v16 = v10;
        if ( v10 <= 100.0 )
          v16 = 100.0;
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        {
          sub_100DAE60(this);
          v10 = *(float *)&v25;
        }
        v11 = *(_DWORD *)(this + 252) >> 11;
        v18[0] = *(float *)(this + 580) - v10;
        v18[1] = *(float *)(this + 584) - v10;
        v18[2] = *(float *)(this + 588) - v16;
        if ( (v11 & 1) != 0 )
        {
          sub_100DAE60(this);
          v10 = *(float *)&v25;
        }
        v17[0] = *(float *)(this + 580) + v10;
        v17[1] = v10 + *(float *)(this + 584);
        v17[2] = v16 + *(float *)(this + 588);
        sub_1025F990(v14, 1024, 0);
        result = sub_1025F9C0(v18, v17, v15);
        v12 = 0;
        for ( i = result; v12 < i; ++v12 )
        {
          result = v14[v12];
          if ( *(_BYTE *)(result + 306) == 6 )
          {
            v13 = *(_DWORD *)(result + 424);
            if ( v13 )
            {
              result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 40))(v13);
              if ( (_BYTE)result )
              {
                (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 840) + 8))(
                  *(_DWORD *)(this + 840),
                  v13,
                  0);
                result = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 96))(v13);
              }
            }
          }
        }
        break;
      case 1:
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 840) + 24))(*(_DWORD *)(this + 840));
        break;
      case 2:
        *(float *)(this + 824) = *(float *)(this + 800);
        goto LABEL_34;
      case 3:
LABEL_34:
        result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 840) + 28))(*(_DWORD *)(this + 840));
        break;
      default:
        return result;
    }
  }
  return result;
}
