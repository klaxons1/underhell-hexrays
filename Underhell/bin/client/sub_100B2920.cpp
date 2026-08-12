int __thiscall sub_100B2920(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  float *v7; // eax
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  result = a2;
  if ( *(_DWORD *)(this + 40) != a2 )
  {
    *(_DWORD *)(this + 40) = a2;
    if ( *(int *)(this + 12) > 0 && (v4 = sub_1012D2F0(*(_DWORD *)(this + 12))) != 0 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 844))(v4);
    else
      v5 = *(_DWORD *)(this + 8);
    if ( v5 == 6 )
    {
      result = sub_100B21A0(this, v8, v9, (int)&a2);
    }
    else
    {
      if ( *(int *)(this + 12) > 0 && (v6 = sub_1012D2F0(*(_DWORD *)(this + 12))) != 0 )
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 844))(v6);
      else
        result = *(_DWORD *)(this + 8);
      if ( result == 5 )
      {
        result = sub_1007A6A0(off_103DCD78, *(_DWORD *)(this + 40));
        if ( result )
        {
          v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 536))(result);
          v9[0] = *v7;
          v9[1] = v7[1];
          v9[2] = v7[2];
          result = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103ED0FC + 44))(off_103ED0FC, v9);
        }
      }
    }
    *(float *)(this + 60) = *(float *)(this + 56);
    *(float *)(this + 76) = -1.0;
  }
  return result;
}
