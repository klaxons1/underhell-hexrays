int __thiscall sub_10313300(float *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  double v8; // st7
  _BYTE v9[12]; // [esp+4h] [ebp-18h] BYREF
  float v10[2]; // [esp+10h] [ebp-Ch] BYREF
  float v11; // [esp+18h] [ebp-4h]

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
    if ( (_BYTE)result )
    {
      v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1096))(v4);
      if ( result )
      {
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
          && (v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
              (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)) )
        {
          v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1096))(v7);
        }
        else
        {
          v5 = 0;
        }
        result = (*(int (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v5 + 540))(v5, v9, v10);
        v8 = v11;
        this[1033] = fabs(v11 - this[1036]) + this[1033];
        this[1034] = v10[0];
        this[1035] = v10[1];
        this[1036] = v8;
      }
    }
  }
  return result;
}
