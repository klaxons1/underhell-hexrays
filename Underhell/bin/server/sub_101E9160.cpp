int __thiscall sub_101E9160(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  _BYTE v10[84]; // [esp+4h] [ebp-7Ch] BYREF
  float v11[3]; // [esp+58h] [ebp-28h] BYREF
  float v12[3]; // [esp+64h] [ebp-1Ch] BYREF
  float v13; // [esp+70h] [ebp-10h]
  float v14; // [esp+74h] [ebp-Ch]
  float v15; // [esp+78h] [ebp-8h]
  int v16; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v2 = *(_DWORD *)(this + 412);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = (_DWORD *)*v3;
      if ( *v3 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*v4 + 320))(*v3) )
        {
          v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v4[6]);
          v6 = *(_DWORD *)(this + 252) >> 11;
          v16 = v5;
          if ( (v6 & 1) != 0 )
            sub_100DAE60(this);
          sub_10422220(this + 704, v12);
          v7 = *(_DWORD *)(this + 252) >> 11;
          v13 = v12[0] * 128.0;
          v14 = v12[1] * 128.0;
          v15 = 128.0 * v12[2];
          if ( (v7 & 1) != 0 )
            sub_100DAE60(this);
          v8 = *(_DWORD *)(this + 252) >> 11;
          v11[0] = *(float *)(this + 580) + v13;
          v11[1] = *(float *)(this + 584) + v14;
          v11[2] = *(float *)(this + 588) + v15;
          if ( (v8 & 1) != 0 )
            sub_100DAE60(this);
          sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v11, 16395, (int)v4, 0, (int)v10);
          sub_10260430(v10, v16);
        }
      }
    }
  }
  return sub_1025FAC0(this);
}
