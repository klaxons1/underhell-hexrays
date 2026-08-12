int __thiscall sub_1001E670(_DWORD *this, _DWORD *a2)
{
  _BYTE *v3; // edi
  int (__thiscall *v4)(_BYTE *, _DWORD *); // edx
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // [esp+14h] [ebp-Ch] BYREF
  float v9; // [esp+18h] [ebp-8h]
  float v10; // [esp+1Ch] [ebp-4h]

  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x1000000) != 0 )
  {
    sub_10043050(0, 0);
    v6 = sub_100217F0(this);
    v8 = *(int *)v6;
    v9 = *(float *)(v6 + 4);
    v10 = *(float *)(v6 + 8);
    if ( *(float *)&v8 != flt_106F1CA8 || v9 != flt_106F1CAC || v10 != flt_106F1CB0 )
    {
      if ( (*a2 == 74 || *a2 == 78)
        && ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x20000000) != 0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int *))(*this + 880))(this, &v8) )
      {
        sub_10078210(*(float *)(this[651] + 20), -2.0);
      }
      else
      {
        sub_10078720((int)&v8, -2.0);
      }
    }
    result = (*(int (__thiscall **)(_DWORD *))(*this + 732))(this);
    if ( (_BYTE)result )
    {
      if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
        && (v7 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this),
            (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 264))(v7))
        && !(unsigned __int8)sub_100B8D10(this + 690) )
      {
        result = sub_100B8CF0(this + 690);
        if ( (_BYTE)result )
        {
          (*(void (__thiscall **)(_DWORD *))(*this + 1896))(this);
          return sub_10043E90(17);
        }
      }
      else
      {
        return sub_10027CD0(0);
      }
    }
  }
  else
  {
    v3 = (_BYTE *)this[906];
    if ( !v3 )
      return sub_100497D0((int)this, (int)a2);
    v4 = *(int (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)v3 + 112);
    v3[8] = 1;
    result = v4(v3, a2);
    if ( !v3[8] )
      return sub_100497D0((int)this, (int)a2);
  }
  return result;
}
