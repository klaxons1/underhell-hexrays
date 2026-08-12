int __thiscall sub_10187410(char *this)
{
  float *v2; // esi
  int result; // eax
  float *v4; // ebx
  int v5; // edx
  int v6; // eax
  double v7; // st7
  int v8; // edx
  int (__thiscall *v9)(char *, _DWORD *); // edx
  double v10; // st7
  _DWORD v11[24]; // [esp+Ch] [ebp-6Ch] BYREF
  int v12; // [esp+6Ch] [ebp-Ch]
  float v13; // [esp+70h] [ebp-8h]
  int v14; // [esp+74h] [ebp-4h]

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *((_DWORD *)this + 1575));
  v14 = -16711936;
  v2 = (float *)(this + 352);
  v12 = 17;
  do
  {
    result = (*(int (__thiscall **)(char *, float *))(*(_DWORD *)this + 156))(this, v2 - 16);
    if ( (_BYTE)result && *((int *)v2 - 3) > 0 )
    {
      v4 = 0;
      v13 = -1.0;
      if ( this[6304] && (*(unsigned __int8 (__thiscall **)(char *, float *))(*(_DWORD *)this + 164))(this, v2 - 16) )
        v4 = v2 - 12;
      if ( this[6306] )
      {
        if ( (*(unsigned __int8 (__thiscall **)(char *, float *))(*(_DWORD *)this + 160))(this, v2 - 16) )
          v13 = (double)*((int *)v2 - 3) * 0.0099999998;
      }
      memset(v11, 0, sizeof(v11));
      v5 = *((_DWORD *)v2 - 14);
      *(float *)&v11[12] = *(v2 - 2);
      v6 = *((_DWORD *)v2 - 13);
      *(float *)&v11[13] = *(v2 - 1);
      v7 = *v2;
      v11[2] = v5;
      v8 = *(_DWORD *)this;
      *(float *)&v11[14] = v7;
      v9 = *(int (__thiscall **)(char *, _DWORD *))(v8 + 220);
      *(float *)&v11[19] = *((float *)this + 70);
      v11[3] = v6;
      *(float *)&v11[15] = v2[1];
      v10 = v2[2];
      v11[21] = v14;
      *(float *)&v11[16] = v10;
      *(float *)&v11[17] = v2[3];
      v11[23] = v4;
      *(float *)&v11[20] = v13;
      result = v9(this, v11);
    }
    v2 += 80;
    --v12;
  }
  while ( v12 );
  return result;
}
