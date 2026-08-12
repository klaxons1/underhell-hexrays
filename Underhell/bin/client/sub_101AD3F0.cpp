_DWORD *__thiscall sub_101AD3F0(_DWORD *this, int a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *result; // eax
  int v10; // [esp+8h] [ebp-4h]
  int v11; // [esp+18h] [ebp+Ch]

  this[107] = -1;
  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 48))(a3);
  if ( v10 && (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 60))(a3) >= 0 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 268))(this, 1);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 264))(this, 1);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 64))(a3);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 72))(a3);
    if ( v5 >= 0 )
    {
      v11 = v6;
    }
    else
    {
      v5 = v6;
      v11 = 0;
    }
    v7 = this[108];
    if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (this[108] & 0xFFF) + 2) != v7 >> 12 )
      v8 = 0;
    else
      v8 = *((_DWORD *)off_103DCD74 + 4 * (this[108] & 0xFFF) + 1);
    if ( v10 == v8 )
    {
      sub_101AC9F0(this, v5, 1);
      return (_DWORD *)sub_101ACA50(this, v11, 1);
    }
    else
    {
      sub_101AC9F0(this, v5, 0);
      sub_101ACA50(this, v11, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3) )
      {
        sub_100D0E40(this, 1);
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
        sub_10248C80("WeaponUsesClips");
      }
      else
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
        sub_10248C80("WeaponDoesNotUseClips");
        sub_100D0E40(this, 0);
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      sub_10248C80("WeaponChanged");
      result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      this[108] = *result;
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 268))(this, 0);
    return (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
  }
  return result;
}
