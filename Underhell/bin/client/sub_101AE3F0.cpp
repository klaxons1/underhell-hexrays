void __thiscall sub_101AE3F0(int this, int a2)
{
  char *v3; // eax
  char *v4; // eax

  if ( a2 )
  {
    sub_1022A940("scrolltime", 57.0);
    *(float *)(this + 284) = 57.0;
    sub_1022A940("separation", 5.0);
    *(float *)(this + 288) = 5.0;
    sub_1022A940("fadeintime", 1.0);
    *(float *)(this + 312) = 1.0;
    sub_1022A940("fadeholdtime", 3.0);
    *(float *)(this + 316) = 3.0;
    sub_1022A940("fadeouttime", 2.0);
    *(float *)(this + 320) = 2.0;
    sub_1022A940("nextfadetime", 2.0);
    *(float *)(this + 324) = 2.0;
    sub_1022A940("pausebetweenwaves", 2.0);
    *(float *)(this + 328) = 2.0;
    sub_1022A940("logotime", 2.0);
    *(float *)(this + 332) = 2.0;
    sub_1022A940("posx", 2.0);
    *(float *)(this + 344) = 2.0;
    sub_1022A940("posy", 2.0);
    *(float *)(this + 348) = 2.0;
    *(_DWORD *)(this + 864) = *(_DWORD *)sub_1022AA10((int)&a2, "color");
    v3 = (char *)sub_1022B4C0("logo", (int)"HALF-LIFE'");
    sub_102282F0((char *)(this + 352), v3, 0x100u);
    v4 = (char *)sub_1022B4C0("logo2", (int)Locale);
    sub_102282F0((char *)(this + 608), v4, 0x100u);
  }
}
