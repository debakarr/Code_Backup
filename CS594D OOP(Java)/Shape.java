class Shape {

	float calculateVolume(float r) {
		return ((4.0f / 3) * 3.14159f * r * r * r);
	}

	float calculateVolume(float r, float h) {
		return ((1.0f / 3) * 3.14159f * r * r * h);
	}

	float calculateVolume(float l, float w, float h) {
		return (l * w * h);
	}
}

class Main {
	public static void main(String[] args) {
		Shape s = new Shape();
		float r, h, l, w;

		switch (args.length) {
		case 1:
			r = Float.parseFloat(args[0]);
			System.out.printf("\nVolume of Sphere of radius %.2f is %.2f cubic units.", r, s.calculateVolume(r));
			break;

		case 2:
			r = Float.parseFloat(args[0]);
			h = Float.parseFloat(args[1]);
			System.out.printf("\nVolume of Cone of radius %.2f and height %.2f is %.2f cubic units.", r, h,  s.calculateVolume(r, h));
			break;

		case 3:
			l = Float.parseFloat(args[0]);
			w = Float.parseFloat(args[1]);
			h = Float.parseFloat(args[2]);
			System.out.printf("\nVolume of Box of length %.2f, width %.2f and height %.2f is %.2f cubic units.", l, w, h, s.calculateVolume(l, w, h));
			break;

		default:
			System.out.println("\nInvalid input");
		}
	}
}