int __thiscall sub_10176F50(void *this)
{
  float v3[3]; // [esp+4h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 100))(this);
  sub_10177C60(this);
  v3[0] = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  return sub_100E10C0((int)this, v3);
}
