bool __thiscall sub_10020640(float *this)
{
  return *(float *)(dword_106B31C8 + 12) >= (double)this[687]
      && ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x200000) != 0
      && (!sub_100CF460(this) || *((_DWORD *)this + 581) != 3)
      && !(unsigned __int8)sub_100697A0(63, 1)
      && ((*(unsigned __int8 (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 1528))(this, 0) || !sub_100CF460(this))
      && *((_BYTE *)this + 2680) == 0;
}
