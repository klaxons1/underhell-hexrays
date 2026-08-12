void __thiscall sub_10041C70(int *this)
{
  const char *v2; // eax
  char *v3; // eax
  char *v4; // eax
  int v5; // eax
  char v6[256]; // [esp+4h] [ebp-200h] BYREF
  char Buffer[256]; // [esp+104h] [ebp-100h] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = (const char *)sub_100D6390(this);
    v3 = sub_1001E280(Buffer, "NPC %s failed to stop properly, slamming activity\n", v2);
    v4 = sub_1001E280(v6, "[Nav] %s", v3);
    sub_10029660(this, (int)v4);
  }
  if ( !(unsigned __int8)sub_1007EBC0(this[647]) )
  {
    if ( !(unsigned __int8)sub_1007E040(this[647]) || (v5 = sub_1007DF30(this[647]), v5 <= 0) )
      v5 = 1;
    sub_10039F40(this, v5);
  }
}
