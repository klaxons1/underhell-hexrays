float *__thiscall sub_103DF7A0(void *this, float *a2, int a3, int a4)
{
  int (__thiscall ***v5)(_DWORD, _DWORD); // eax
  int v6; // eax
  float *result; // eax
  float *v8; // eax
  double v9; // st7
  _BYTE v10[12]; // [esp+4h] [ebp-Ch] BYREF

  v5 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
  if ( (**v5)(v5, 0) )
  {
    v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
    (*(void (__thiscall **)(int, _DWORD, float *, _BYTE *, _DWORD))(*(_DWORD *)v6 + 8))(v6, 0, a2, v10, 0);
    return a2;
  }
  else
  {
    v8 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
    *a2 = *v8;
    a2[1] = v8[1];
    v9 = v8[2];
    result = a2;
    a2[2] = v9;
  }
  return result;
}
