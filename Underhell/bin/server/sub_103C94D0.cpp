bool __thiscall sub_103C94D0(_DWORD *this, int *a2)
{
  bool result; // al
  float v4; // [esp+Ch] [ebp-4h]

  result = a2
        && !*((_BYTE *)this + 2680)
        && (this[62] & 0x80) == 0
        && (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2)
        && *((_BYTE *)a2 + 2329)
        && (a2[64] & 0x8000) == 0
        && (v4 = *(float *)(dword_106EBEFC + 44),
            v4 * 0.66000003 > (double)(*(int (__thiscall **)(int *))(*a2 + 1572))(a2))
        && (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 264))(a2)
        && (sub_103C7C10(a2, 0.15000001) && !*((_BYTE *)this + 5724)
         || this[581] != 3
         && !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this)
         && !sub_10023D10(this, 17)
         && !sub_10023D10(this, 18));
  return result;
}
