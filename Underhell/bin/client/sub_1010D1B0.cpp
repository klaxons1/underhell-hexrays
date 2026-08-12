int __thiscall sub_1010D1B0(int this, int (__thiscall ***a2)(_DWORD))
{
  int result; // eax
  int v4; // ebx
  float *v5; // esi
  float *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  int v12; // eax
  float v13; // [esp+0h] [ebp-10h]
  int v14; // [esp+0h] [ebp-10h]

  result = (int)a2;
  if ( a2 )
  {
    v4 = sub_1009EA30(a2);
    result = sub_100422D0();
    if ( result )
    {
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 268))(result);
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 268))(v4);
      v7 = v6[1] - v5[1];
      v8 = v7 * v7;
      v9 = *v6 - *v5;
      v10 = v8;
      v11 = v6[2] - v5[2];
      v13 = v9 * v9 + v10 + v11 * v11;
      *(float *)&v14 = off_103EDFE0(v13) * *(float *)(this + 12);
      sub_1009E9B0((_DWORD *)this, v14);
      result = sub_101BC880();
      if ( (_BYTE)result )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
        return sub_101BCA60(v12);
      }
    }
  }
  return result;
}
