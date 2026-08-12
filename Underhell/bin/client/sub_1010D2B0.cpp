int __thiscall sub_1010D2B0(int this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  int v4; // esi
  float *v5; // edi
  float *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // [esp+0h] [ebp-28h]
  float v10[3]; // [esp+10h] [ebp-18h] BYREF
  float v11; // [esp+1Ch] [ebp-Ch]
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]
  int v14; // [esp+30h] [ebp+8h]

  result = (int)a2;
  if ( a2 )
  {
    v14 = sub_1009EA30(a2);
    result = sub_100422D0();
    v4 = result;
    if ( result )
    {
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 268))(result);
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 268))(v14);
      v11 = *v6 - *v5;
      v12 = v6[1] - v5[1];
      v13 = v6[2] - v5[2];
      off_103EDFEC();
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 40))(v4);
      sub_101EDFB0(v7, v10);
      *(float *)&v9 = (v10[0] * v11 + v10[1] * v12 + v10[2] * v13) * *(float *)(this + 12);
      sub_1009E9B0((_DWORD *)this, v9);
      result = sub_101BC880();
      if ( (_BYTE)result )
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
        return sub_101BCA60(v8);
      }
    }
  }
  return result;
}
