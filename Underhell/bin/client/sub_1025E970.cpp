int (__thiscall ***__thiscall sub_1025E970(void *this))(_DWORD, int, int, int, int, int, _DWORD, _DWORD)
{
  int (__thiscall ***result)(_DWORD, int, int, int, int, int, _DWORD, _DWORD); // eax
  int v3; // [esp+10h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-Ch] BYREF
  int v5; // [esp+18h] [ebp-8h] BYREF
  int v6; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(void *, int *, int *, int *, int *))(*(_DWORD *)this + 776))(this, &v5, &v3, &v6, &v4);
  result = (int (__thiscall ***)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(*(int (__thiscall **)(void *))(*(_DWORD *)this + 256))(this);
  if ( result )
    return (int (__thiscall ***)(_DWORD, int, int, int, int, int, _DWORD, _DWORD))(**result)(
                                                                                    result,
                                                                                    v5,
                                                                                    v3,
                                                                                    v5 + v6,
                                                                                    v3 + v4,
                                                                                    -1,
                                                                                    0,
                                                                                    0);
  return result;
}
